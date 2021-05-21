cd C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build
vcvarsall.bat amd64
cd C:\Worksheet6\Exercise 3\Exercise 3\build
cmake -DCMAKE_PREFIX_PATH="C:\Qt\5.15.1\msvc2019_64\bin;C:\Users\georg\Source Code\VTK\QT_5.15.1\bin:
msbuild QtVTKExample.sln
PAUSE