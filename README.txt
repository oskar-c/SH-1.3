Welcome!

This program was created on Windows using VSCode 2019, OpenCV 4.6.0, and CMake 3.25.1
VSCode extensions used in this program are C/C++ and C/C++ Extension Pack by Microsoft, C/C++ Compile Run by danielpinto8zz6, and CMake by twxs.

As of verion 1.3, the program will read a sample image made to represent a colored test splotch, apply a series of morphological transformations
to filter for the desired color, and produce an output image that contains only the desired color splotch, all else being made black. 

To run standalone:
1. In Github, click "Code", and select "Download ZIP" from the dropdown menu
2. Extract the zip file.
3. Open the "build" folder
4. Open the "Debug" folder
5. Run the "SH_executable" file
6. The program should run as expected! If you want to try it with different images, simply place your chosen image into the debug folder,
and edit the "imread" function with your image filename. 




To run this program on Windows using VSCode, watch this helpful video https://youtu.be/m9HBM1m_EMU, or follow instructions below:
1. Install the necessary dependencies and extensions
	a. OpenCV 4.6.0
	b. VSCode 2019
	c. CMake 3.25.1
	d. VSCode Extension C/C++ by Microsoft
	e. VSCode Extension C/C++ Extension Pack by Microsoft
	f. VSCode Extension C/C++ Compile Run by danielpintzo8zz6
	g. VSCode Extension CMake by twxs

2. Add CMake and OpenCV to System Path variable
 	a. In the start menu, search "Edit the System Environment Variables"
	b. At the bottom, select "Environmental Variables"
	c. In the System Variables section, find and select "Path", and select "Edit"
	d. To add to path, choose "Browse" or type in the filepath manually
	e. For CMake, add C:\...\CMake\bin
	f. For OpenCV, add C:\...\opencv\build\x64\vc15\lib, and C:\...\opencv\build\x64\vc15\bin
	g. Press Ok

3. Open the Project folder in VSCode. You may do this a number of ways:
	a. Copy link from github repository
	b. Download project folder and open folder in VSCode

4. You are now ready to go!







 
