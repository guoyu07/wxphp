/**
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * Some parts of this file are auto-generated.
*/

#ifdef PHP_WIN32
	#include <winsock2.h>
#endif

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif


#if !wxUSE_THREADS
    #error "This sample requires thread support!"
#endif

#if !wxUSE_UNICODE
	#define tcscmp strcmp
#else
	#define tcscmp wcscmp
#endif

#include <wx/thread.h>
#include <wx/aui/aui.h>
#include <wx/fs_zip.h>

/**
 * Space reserved for autogenerated #include declarations
 */
// entries --->
#include <wx/image.h>
#include <wx/rawbmp.h>
#include <wx/vector.h>
#include <wx/aboutdlg.h>
#include <wx/accel.h>
#include <wx/access.h>
#include <wx/event.h>
#include <wx/affinematrix2d.h>
#include <wx/animate.h>
#include <wx/any.h>
#include <wx/anybutton.h>
#include <wx/app.h>
#include <wx/apptrait.h>
#include <wx/archive.h>
#include <wx/dynarray.h>
#include <wx/arrstr.h>
#include <wx/artprov.h>
#include <wx/aui/dockart.h>
#include <wx/aui/framemanager.h>
#include <wx/aui/auibook.h>
#include <wx/dcbuffer.h>
#include <wx/bannerwindow.h>
#include <wx/bitmap.h>
#include <wx/bmpbuttn.h>
#include <wx/bmpcbox.h>
#include <wx/dataobj.h>
#include <wx/tglbtn.h>
#include <wx/bookctrl.h>
#include <wx/sizer.h>
#include <wx/brush.h>
#include <wx/stream.h>
#include <wx/utils.h>
#include <wx/busyinfo.h>
#include <wx/button.h>
#include <wx/laywin.h>
#include <wx/calctrl.h>
#include <wx/caret.h>
#include <wx/buffer.h>
#include <wx/checkbox.h>
#include <wx/checklst.h>
#include <wx/choice.h>
#include <wx/choicebk.h>
#include <wx/object.h>
#include <wx/ipc.h>
#include <wx/clntdata.h>
#include <wx/dcclient.h>
#include <wx/clipbrd.h>
#include <wx/cmdline.h>
#include <wx/collpane.h>
#include <wx/colour.h>
#include <wx/colourdata.h>
#include <wx/gdicmn.h>
#include <wx/colordlg.h>
#include <wx/clrpicker.h>
#include <wx/combobox.h>
#include <wx/combo.h>
#include <wx/cmdproc.h>
#include <wx/commandlinkbutton.h>
#include <wx/thread.h>
#include <wx/config.h>
#include <wx/ipcbase.h>
#include <wx/cshelp.h>
#include <wx/control.h>
#include <wx/ctrlsub.h>
#include <wx/convauto.h>
#include <wx/strconv.h>
#include <wx/cursor.h>
#include <wx/custombgwin.h>
#include <wx/socket.h>
#include <wx/datstrm.h>
#include <wx/dataview.h>
#include <wx/dateevt.h>
#include <wx/datectrl.h>
#include <wx/datetime.h>
#include <wx/dc.h>
#include <wx/memory.h>
#include <wx/debugrpt.h>
#include <wx/renderer.h>
#include <wx/dialog.h>
#include <wx/dialup.h>
#include <wx/dir.h>
#include <wx/dirdlg.h>
#include <wx/filepicker.h>
#include <wx/display.h>
#include <wx/docview.h>
#include <wx/docmdi.h>
#include <wx/dragimag.h>
#include <wx/dnd.h>
#include <wx/dynlib.h>
#include <wx/editlbox.h>
#include <wx/encconv.h>
#include <wx/eventfilter.h>
#include <wx/evtloop.h>
#include <wx/generic/helpext.h>
#include <wx/ffile.h>
#include <wx/wfstream.h>
#include <wx/file.h>
#include <wx/fileconf.h>
#include <wx/filectrl.h>
#include <wx/filedlg.h>
#include <wx/filehistory.h>
#include <wx/filename.h>
#include <wx/filesys.h>
#include <wx/fswatcher.h>
#include <wx/translation.h>
#include <wx/mimetype.h>
#include <wx/fdrepdlg.h>
#include <wx/valnum.h>
#include <wx/font.h>
#include <wx/fontdata.h>
#include <wx/fontdlg.h>
#include <wx/fontenum.h>
#include <wx/fontmap.h>
#include <wx/fontpicker.h>
#include <wx/frame.h>
#include <wx/volume.h>
#include <wx/protocol/ftp.h>
#include <wx/gauge.h>
#include <wx/gbsizer.h>
#include <wx/dcgraph.h>
#include <wx/gdiobj.h>
#include <wx/dirctrl.h>
#include <wx/valgen.h>
#include <wx/glcanvas.h>
#include <wx/graphics.h>
#include <wx/grid.h>
#include <wx/hashmap.h>
#include <wx/hashset.h>
#include <wx/hash.h>
#include <wx/headercol.h>
#include <wx/headerctrl.h>
#include <wx/help.h>
#include <wx/vscroll.h>
#include <wx/html/htmlcell.h>
#include <wx/html/htmlwin.h>
#include <wx/html/htmprint.h>
#include <wx/html/htmlfilt.h>
#include <wx/html/helpctrl.h>
#include <wx/html/helpdata.h>
#include <wx/html/helpdlg.h>
#include <wx/html/helpfrm.h>
#include <wx/html/helpwnd.h>
#include <wx/htmllbox.h>
#include <wx/html/htmlpars.h>
#include <wx/html/htmltag.h>
#include <wx/html/winpars.h>
#include <wx/protocol/http.h>
#include <wx/hyperlink.h>
#include <wx/icon.h>
#include <wx/iconbndl.h>
#include <wx/iconloc.h>
#include <wx/windowid.h>
#include <wx/imaglist.h>
#include <wx/layout.h>
#include <wx/infobar.h>
#include <wx/init.h>
#include <wx/joystick.h>
#include <wx/kbdstate.h>
#include <wx/list.h>
#include <wx/listbook.h>
#include <wx/listbox.h>
#include <wx/listctrl.h>
#include <wx/intl.h>
#include <wx/log.h>
#include <wx/longlong.h>
#include <wx/affinematrix2dbase.h>
#include <wx/mdi.h>
#include <wx/mediactrl.h>
#include <wx/dcmemory.h>
#include <wx/fs_mem.h>
#include <wx/mstream.h>
#include <wx/menu.h>
#include <wx/menuitem.h>
#include <wx/msgdlg.h>
#include <wx/msgout.h>
#include <wx/msgqueue.h>
#include <wx/metafile.h>
#include <wx/minifram.h>
#include <wx/dcmirror.h>
#include <wx/module.h>
#include <wx/mousemanager.h>
#include <wx/mousestate.h>
#include <wx/choicdlg.h>
#include <wx/fontutil.h>
#include <wx/containr.h>
#include <wx/nonownedwnd.h>
#include <wx/notebook.h>
#include <wx/notifmsg.h>
#include <wx/numformatter.h>
#include <wx/odcombo.h>
#include <wx/printdlg.h>
#include <wx/cmndata.h>
#include <wx/palette.h>
#include <wx/panel.h>
#include <wx/textdlg.h>
#include <wx/filefn.h>
#include <wx/pen.h>
#include <wx/persist.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/treebook.h>
#include <wx/persist/window.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/editors.h>
#include <wx/propgrid/propgrid.h>
#include <wx/propgrid/propgridpagestate.h>
#include <wx/pickerbase.h>
#include <wx/platinfo.h>
#include <wx/geometry.h>
#include <wx/popupwin.h>
#include <wx/position.h>
#include <wx/dcps.h>
#include <wx/power.h>
#include <wx/print.h>
#include <wx/dcprint.h>
#include <wx/process.h>
#include <wx/progdlg.h>
#include <wx/propgrid/propgridiface.h>
#include <wx/propgrid/manager.h>
#include <wx/propdlg.h>
#include <wx/protocol/protocol.h>
#include <wx/protocol/log.h>
#include <wx/quantize.h>
#include <wx/radiobox.h>
#include <wx/radiobut.h>
#include <wx/rearrangectrl.h>
#include <wx/recguard.h>
#include <wx/regex.h>
#include <wx/region.h>
#include <wx/ribbon/art.h>
#include <wx/ribbon/bar.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ribbon/control.h>
#include <wx/ribbon/gallery.h>
#include <wx/ribbon/page.h>
#include <wx/ribbon/panel.h>
#include <wx/ribbon/toolbar.h>
#include <wx/richmsgdlg.h>
#include <wx/richtext/richtextbuffer.h>
#include <wx/richtext/richtextstyles.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/richtext/richtextformatdlg.h>
#include <wx/richtext/richtextprint.h>
#include <wx/richtext/richtexthtml.h>
#include <wx/richtext/richtextstyledlg.h>
#include <wx/richtext/richtextxml.h>
#include <wx/richtooltip.h>
#include <wx/sashwin.h>
#include <wx/scopedarray.h>
#include <wx/scopedptr.h>
#include <wx/scopeguard.h>
#include <wx/dcscreen.h>
#include <wx/scrolbar.h>
#include <wx/scrolwin.h>
#include <wx/srchctrl.h>
#include <wx/sharedptr.h>
#include <wx/snglinst.h>
#include <wx/xrc/xh_sizer.h>
#include <wx/slider.h>
#include <wx/sckstrm.h>
#include <wx/sound.h>
#include <wx/spinbutt.h>
#include <wx/spinctrl.h>
#include <wx/splash.h>
#include <wx/splitter.h>
#include <wx/stack.h>
#include <wx/stackwalk.h>
#include <wx/stdpaths.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/stdstream.h>
#include <wx/stopwatch.h>
#include <wx/textctrl.h>
#include <wx/string.h>
#include <wx/sstream.h>
#include <wx/tokenzr.h>
#include <wx/stc/stc.h>
#include <wx/dcsvg.h>
#include <wx/richtext/richtextsymboldlg.h>
#include <wx/sysopt.h>
#include <wx/settings.h>
#include <wx/tarstrm.h>
#include <wx/taskbar.h>
#include <wx/sckipc.h>
#include <wx/textcompleter.h>
#include <wx/textentry.h>
#include <wx/textfile.h>
#include <wx/txtstrm.h>
#include <wx/valtext.h>
#include <wx/textwrapper.h>
#include <wx/timectrl.h>
#include <wx/timer.h>
#include <wx/tipdlg.h>
#include <wx/tipwin.h>
#include <wx/toolbar.h>
#include <wx/toolbook.h>
#include <wx/tooltip.h>
#include <wx/toplevel.h>
#include <wx/tracker.h>
#include <wx/treebook.h>
#include <wx/treectrl.h>
#include <wx/treebase.h>
#include <wx/treelist.h>
#include <wx/uiaction.h>
#include <wx/unichar.h>
#include <wx/uri.h>
#include <wx/url.h>
#include <wx/ustring.h>
#include <wx/validate.h>
#include <wx/variant.h>
#include <wx/versioninfo.h>
#include <wx/vlbox.h>
#include <wx/weakref.h>
#include <wx/webview.h>
#include <wx/webviewarchivehandler.h>
#include <wx/window.h>
#include <wx/wupdlock.h>
#include <wx/withimages.h>
#include <wx/wizard.h>
#include <wx/wrapsizer.h>
#include <wx/xlocale.h>
#include <wx/xml/xml.h>
#include <wx/xrc/xmlres.h>
#include <wx/zipstrm.h>
#include <wx/zstream.h>
// <--- entries


/**
 * Import configure options when building outside 
 * of the PHP source tree
 */
#ifdef HAVE_CONFIG_H
	#include "config.h"
#endif

#ifdef WORDS_BIGENDIAN
	#undef WORDS_BIGENDIAN
#endif

#ifdef M_PI
	#undef M_PI
#endif

#ifdef _WIN32_WINNT
	#undef _WIN32_WINNT
#endif

/**
 * Include PHP Standard Header
 */
extern "C" {
#include "php.h"
#include "zend_API.h" //Declaration for zend_declare_class_constant_long
}
