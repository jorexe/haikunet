// This file is released under the 3-clause BSD license. See COPYING-BSD.
// Generated by builder.sce : Please, do not edit this file
// ----------------------------------------------------------------------------
//
backdoor_path = get_absolute_file_path('loader.sce');
//
// ulink previous function with same name
[bOK, ilib] = c_link('backdoor');
if bOK then
  ulink(ilib);
end
//
link(backdoor_path + 'libbackdoor' + getdynlibext(), ['backdoor'],'c');
// remove temp. variables on stack
clear backdoor_path;
clear bOK;
clear ilib;
// ----------------------------------------------------------------------------