# DLL-Injector
> A CLI DLL injector written in C++ for x86 and x64 architectures. Works only on Windows. The solution also contains a basic DLL project template.

## Usage
After installing the program (see [Installation](##Installation)) you can invoke the following command from anywhere in the command line:
```
DLL-Injector [process name] [dll path]
```
Paramaters:
`[process name]` - Process name of the currently running process you want to inject.
`[dll path]` - Filepath of the DLL file.

Example:
```
DLL-Injector Notepad.exe C:\DLL Files\example.dll
```

## Installation
You can either download the `.exe` files from the [releases page](https://github.com/dexmoh/CLI-DLL-Injector/releases), or you can build the binaries yourself in Visual Studio (see the [Building](##Building)).

After obtaining the files, you can add the binaries to the PATH so you can use them from anywhere in the command line.

To add the binaries to the path, you can:
1) Right click the start button.
2) In the search bar enter "path".
3) Open "Edit the system environment variables".
4) Click on "Environment Variables..." button.
5) Under "System variables" section look for a variable called "Path", double click it.
6) Press the "New" button and enter the folder path to your `.exe` file. (Example of the path: `C:\DLL-Injector\`)
7) Press "Ok" and restart any open terminal windows.

After this you should be able to invoke the `DLL-Injector` command from anywhere in the terminal.

## Building
To build the binaries in Visual Studio, you'll have to download the respository, open the `.sln` file, choose either x86 or x64 architecture and select `Build > Build Solution`.

The built binaries should be located at `$(SolutionDir)\Bin\DLL-Injector\$(Platform)\$(Configuration)\`.

## Note
I don't condone any malicious use of this software. This project is something I wanted to make for learning purposes and then decided to publish it.
