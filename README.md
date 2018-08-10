# QChartView-Plugin
A plugin for QtCreator and designer that adds the QChartView widget to the designer palette.

Build a release version with the compiler shown in Help->About Qt Creator.

The build will automatically install the plugin such that it works with the standalone Qt designer, but NOT for the Creator integrated designer.  You have to copy from your shadow build directory to

  <Qt install path>/Tools/QtCreator/bin/plugins/designer
  
You should see QChartView under Display Widgets in the designer palette.  If you do not, do (while designer page open)
Tools->Form Editor->About Qt Designer Plugins.  If this shows an error, it may be that the QtCharts*.dll libraries are not in the proper place for QtCreator to pick them up.  Copy them from

  <Qt install path>/<Qt version>/<appropriate compiler>/bin/QtCharts*.dll

where Qt version is 5.10, 5.11.1, etc.  The appropriate compiler depends on the compiler with which creator was built. In my case, on Windows 10, that is MSVC2015.  Do Help->About Qt Creator to find the correct compiler. I used MSVC2015 Community with no issues.

Copy the files to

  <Qt install path>/Tools/QtCreator/bin
  
you can hit the Refresh button on the About Qt Designer Plugins.  If that doesn't work, then maybe you built the plugin with the wrong compiler.  
