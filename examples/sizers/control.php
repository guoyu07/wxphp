<?php

/**
 * This frame acts as a controller of the main demonstration window
 */
class ControlFrame extends wxFrame
{
    const ID_DEMO =  10000;
    const ID_HORIZ = 10001;

    // Callbacks for various events
    protected $changeDemohandler;

    // Controls that need to be referred to class-wide
    protected $choiceCtrl;
    protected $helpCtrl;
    protected $horizCtrl;

    // Misc class properties
    protected $helpStrings;
    protected $demoIndex;

    public function __construct(array $demoNames, array $helpStrings, $parent = null)
    {
        // The "dialog style" means that the window deliberately cannot be resized
        parent::__construct(
            $parent,
            wxID_TOP,
            "Sizer controller",
            wxDefaultPosition,
            new wxSize(350, 200),
            wxDEFAULT_DIALOG_STYLE
        );
        $this->SetPosition(new wxPoint(100, 100));

        $this->choiceCtrl =
            new wxChoice($this, self::ID_DEMO, wxDefaultPosition, new wxSize(330, 29), $demoNames);
        $this->helpCtrl =
            new wxStaticText($this, wxID_ANY, '', wxDefaultPosition, new wxSize(330, 100));

        $sizer = new wxBoxSizer(wxVERTICAL);
        $sizer->Add($this->choiceCtrl, 0, wxALL, 8);
        $sizer->Add($this->helpCtrl, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
        $this->initAlignControls($sizer);
        $this->SetSizer($sizer);

        // Save the help strings in this class too
        $this->helpStrings = $helpStrings;

        $this->Connect(wxEVT_CHOICE, [$this, "controlChangeEvent"]);
    }

    /**
     * @todo Add a label to the control, then add another label/widget for vertical
     *
     * @param wxSizer $sizer
     */
    protected function initAlignControls(wxSizer $sizer)
    {
        $hSizer = new wxBoxSizer(wxHORIZONTAL);
        $labelHoriz =
            new wxStaticText($this, wxID_ANY, 'H alignment', wxDefaultPosition, new wxSize(86, 18));
        $this->horizCtrl =
            new wxChoice($this, self::ID_HORIZ, wxDefaultPosition, new wxSize(80, 29), ["Left", "Right"]);

        $hSizer->Add($labelHoriz, 0, wxALIGN_CENTER_VERTICAL);
        $hSizer->Add($this->horizCtrl);

        $sizer->Add($hSizer, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
    }

    /**
     * Receive a WX event from the choice control
     *
     * @param wxCommandEvent $event
     */
    public function controlChangeEvent(wxCommandEvent $event)
    {
        if ($event->GetId() === self::ID_DEMO)
        {
            $this->changeDemoEvent($event->GetInt());
        }
        elseif ($event->GetId() === self::ID_HORIZ)
        {
            $this->changeHorizEvent($event->GetInt());
        }
    }

    /**
     * Set the menu choice and call the attached handler
     *
     * @param integer $index
     */
    public function setDemoChoice($index)
    {
        $this->setHelp($index);
        $this->choiceCtrl->SetSelection($index);
        $this->changeDemoEvent($index);
    }

    /**
     * Handles a request to change the demo
     *
     * @param integer $index
     */
    protected function changeDemoEvent($index)
    {
        $this->setHelp($index);

        $func = $this->changeDemoHandler;
        $func($index, $this->getSizerFlags());

        $this->demoIndex = $index;
    }

    /**
     * Handles a request to change the horizontal justification options
     *
     * @param integer $index
     */
    protected function changeHorizEvent($index)
    {
        $this->changeDemoEvent($this->demoIndex);
    }

    protected function setHelp($index)
    {
        $this->helpCtrl->SetLabel($this->helpStrings[$index]);

        // The wrapping can change the control size, so it's worth asking the window
        // to re-layout its controls
        $this->helpCtrl->Wrap(330);
        $this->Layout();
    }

    public function setChangeDemoHandler($changeDemoHandler)
    {
        $this->changeDemoHandler = $changeDemoHandler;
    }

    protected function getSizerFlags()
    {
        $flags = 0;

        $horiz = $this->horizCtrl->GetSelection();
        switch ($horiz)
        {
            case 0:
                $flags += wxALIGN_LEFT;
                break;
            case 1:
                $flags += wxALIGN_RIGHT;
                break;
        }

        return $flags;
    }
}
