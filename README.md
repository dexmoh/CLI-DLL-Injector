# CLI-DLL-Injector
> A CLI DLL injector written in C++ for x86 and x64 architectures. Works only on Windows. The solution also contains a basic DLL project template.

## Usage
After installing the program (see [Installation](#installation)) you can invoke the following command from anywhere in the command line:
```
dlli [process name] [dll path]
```

Paramaters:
1) `[process name]` - Process name of the currently running process you want to inject.
2) `[dll path]` - Filepath of the DLL file.

Example:
```
dlli Notepad.exe C:\DLLs\example.dll
```
![image](https://github.com/dexmoh/CLI-DLL-Injector/assets/60656530/81decbf0-b51c-48ef-8da3-1bafdde5028a)


## Installation
You can either download the `.exe` files from the [releases page](https://github.com/dexmoh/CLI-DLL-Injector/releases), or you can build the binaries yourself in Visual Studio (see [Building](#building)).

After obtaining the files, you can add the binaries to the PATH so you can use them from anywhere in the command line.

To add the binaries to the path, you can:
1) Right click the start button.
2) In the search bar enter "path".
3) Open "Edit the system environment variables".
4) Click on "Environment Variables..." button.
5) Under "System variables" section look for a variable called "Path", double click it.
6) Press the "New" button and enter the folder path to your `.exe` file. (Example of the path: `C:\DLL-Injector\Bin\`)
8) Press "Ok" and restart any open terminal windows.

After this you should be able to invoke the `dlli` command from anywhere in the terminal.

## Building
To build the binaries in Visual Studio, you'll have to download the respository, open the `.sln` file, choose either x86 or x64 architecture and select `Build > Build Solution`.

The built binaries should be located at `$(SolutionDir)Bin\$(ProjectName)\$(Configuration)-$(Platform)\`.

## Note
I don't condone any malicious use of this software. This project is something I wanted to make for learning purposes and then decided to publish it.
