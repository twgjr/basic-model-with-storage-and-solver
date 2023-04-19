# basic-model-with-storage-and-solver
Symbolic equation solver using diagrams. Demo of work in progress desktop application.  Uses an external C++ library called Z3 to solve systems of equations.  Application is tested for 64-bit Windows.

## Installation
1. Download and install the Qt library, version 5.15.2, MinGW64 desktop (64-bit).  Also, install the latest Qt Creator IDE
2. Clone this repository locally to a Windows 64-bit PC.

## Example Usage
1. Open the Qt project file where the repository was downloaded: ```<repository folder>\basic-model-with-storage-and-solver-V3\basic-model-with-storage-and-solver-V3.pro```
2. Run the project to open a window of the demo app.
3. Click "Add New Block" button at bottom of window 3 times to add 3 new blocks.  
4. Enter ```a>2``` in the "Enter an equation" field of the first block.
5. Enter ```b>1``` in second block.
6. Enter ```a+b=4``` in the third block.
7. Click the "Solve Model" button.
8. Check the solution in the Qt Creator Application Output tab.  It should list the solution of
```
"b"  =  "1.5"
"a"  =  "2.5"
```
