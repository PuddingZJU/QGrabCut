# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Applications/CMake 2.8-12.app/Contents/bin/cmake"

# The command to remove a file.
RM = "/Applications/CMake 2.8-12.app/Contents/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = "/Applications/CMake 2.8-12.app/Contents/bin/ccmake"

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/leon/Documents/QGrabCut

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leon/Documents/QGrabCut/Qtbuild

# Include any dependencies generated for this target.
include CMakeFiles/QGrabCut.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QGrabCut.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QGrabCut.dir/flags.make

ui_ParamWidget.h: ../ui/ParamWidget.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_ParamWidget.h"
	/Applications/Qt/5.3/clang_64/bin/uic -o /Users/leon/Documents/QGrabCut/Qtbuild/ui_ParamWidget.h /Users/leon/Documents/QGrabCut/ui/ParamWidget.ui

ui_QGrabCut.h: ../ui/QGrabCut.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_QGrabCut.h"
	/Applications/Qt/5.3/clang_64/bin/uic -o /Users/leon/Documents/QGrabCut/Qtbuild/ui_QGrabCut.h /Users/leon/Documents/QGrabCut/ui/QGrabCut.ui

qrc_QGrabCut.cpp: ui/QGrabCut.qrc.depends
qrc_QGrabCut.cpp: ../ui/QGrabCut.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_QGrabCut.cpp"
	/Applications/Qt/5.3/clang_64/bin/rcc -name QGrabCut -o /Users/leon/Documents/QGrabCut/Qtbuild/qrc_QGrabCut.cpp /Users/leon/Documents/QGrabCut/ui/QGrabCut.qrc

CMakeFiles/QGrabCut.dir/main.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/main.cpp.o -c /Users/leon/Documents/QGrabCut/main.cpp

CMakeFiles/QGrabCut.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/main.cpp > CMakeFiles/QGrabCut.dir/main.cpp.i

CMakeFiles/QGrabCut.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/main.cpp -o CMakeFiles/QGrabCut.dir/main.cpp.s

CMakeFiles/QGrabCut.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/main.cpp.o.requires

CMakeFiles/QGrabCut.dir/main.cpp.o.provides: CMakeFiles/QGrabCut.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/main.cpp.o.provides

CMakeFiles/QGrabCut.dir/main.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/main.cpp.o

CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o: ../SegmentInterface.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o -c /Users/leon/Documents/QGrabCut/SegmentInterface.cpp

CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/SegmentInterface.cpp > CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.i

CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/SegmentInterface.cpp -o CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.s

CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.requires

CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.provides: CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.provides

CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o

CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o: ../gmm/GMM.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o -c /Users/leon/Documents/QGrabCut/gmm/GMM.cpp

CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/gmm/GMM.cpp > CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.i

CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/gmm/GMM.cpp -o CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.s

CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.requires

CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.provides: CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.provides

CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o

CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o: ../grabcut/CommonFunc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o -c /Users/leon/Documents/QGrabCut/grabcut/CommonFunc.cpp

CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/grabcut/CommonFunc.cpp > CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.i

CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/grabcut/CommonFunc.cpp -o CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.s

CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.requires

CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.provides: CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.provides

CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o

CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o: ../grabcut/GrabCut.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o -c /Users/leon/Documents/QGrabCut/grabcut/GrabCut.cpp

CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/grabcut/GrabCut.cpp > CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.i

CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/grabcut/GrabCut.cpp -o CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.s

CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.requires

CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.provides: CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.provides

CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o

CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o: ../maxflow/graph.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o -c /Users/leon/Documents/QGrabCut/maxflow/graph.cpp

CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/maxflow/graph.cpp > CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.i

CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/maxflow/graph.cpp -o CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.s

CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.requires

CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.provides: CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.provides

CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o

CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o: ../maxflow/maxflow.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o -c /Users/leon/Documents/QGrabCut/maxflow/maxflow.cpp

CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/maxflow/maxflow.cpp > CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.i

CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/maxflow/maxflow.cpp -o CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.s

CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.requires

CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.provides: CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.provides

CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o

CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o: ../LoG/smooth.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o -c /Users/leon/Documents/QGrabCut/LoG/smooth.cpp

CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/LoG/smooth.cpp > CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.i

CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/LoG/smooth.cpp -o CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.s

CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.requires

CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.provides: CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.provides

CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o

CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o: ../ui/ImageLabel.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o -c /Users/leon/Documents/QGrabCut/ui/ImageLabel.cpp

CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/ui/ImageLabel.cpp > CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.i

CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/ui/ImageLabel.cpp -o CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.s

CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.requires

CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.provides: CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.provides

CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o

CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o: ../ui/ImageWidget.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o -c /Users/leon/Documents/QGrabCut/ui/ImageWidget.cpp

CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/ui/ImageWidget.cpp > CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.i

CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/ui/ImageWidget.cpp -o CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.s

CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.requires

CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.provides: CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.provides

CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o

CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o: ../ui/ParamWidget.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o -c /Users/leon/Documents/QGrabCut/ui/ParamWidget.cpp

CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/ui/ParamWidget.cpp > CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.i

CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/ui/ParamWidget.cpp -o CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.s

CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.requires

CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.provides: CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.provides

CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o

CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o: ../ui/QGrabCut.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o -c /Users/leon/Documents/QGrabCut/ui/QGrabCut.cpp

CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/ui/QGrabCut.cpp > CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.i

CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/ui/QGrabCut.cpp -o CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.s

CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.requires

CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.provides: CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.provides

CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o

CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o: qrc_QGrabCut.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_16)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o -c /Users/leon/Documents/QGrabCut/Qtbuild/qrc_QGrabCut.cpp

CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/Qtbuild/qrc_QGrabCut.cpp > CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.i

CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/Qtbuild/qrc_QGrabCut.cpp -o CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.s

CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.requires

CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.provides: CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.provides

CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o

CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o: CMakeFiles/QGrabCut.dir/flags.make
CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o: QGrabCut_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles $(CMAKE_PROGRESS_17)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o -c /Users/leon/Documents/QGrabCut/Qtbuild/QGrabCut_automoc.cpp

CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/leon/Documents/QGrabCut/Qtbuild/QGrabCut_automoc.cpp > CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.i

CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/leon/Documents/QGrabCut/Qtbuild/QGrabCut_automoc.cpp -o CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.s

CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.requires:
.PHONY : CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.requires

CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.provides: CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.requires
	$(MAKE) -f CMakeFiles/QGrabCut.dir/build.make CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.provides.build
.PHONY : CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.provides

CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.provides.build: CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o

# Object files for target QGrabCut
QGrabCut_OBJECTS = \
"CMakeFiles/QGrabCut.dir/main.cpp.o" \
"CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o" \
"CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o" \
"CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o" \
"CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o" \
"CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o" \
"CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o" \
"CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o" \
"CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o" \
"CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o" \
"CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o" \
"CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o" \
"CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o" \
"CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o"

# External object files for target QGrabCut
QGrabCut_EXTERNAL_OBJECTS =

QGrabCut: CMakeFiles/QGrabCut.dir/main.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o
QGrabCut: CMakeFiles/QGrabCut.dir/build.make
QGrabCut: /Applications/Qt/5.3/clang_64/lib/QtWidgets.framework/QtWidgets
QGrabCut: /Applications/Qt/5.3/clang_64/lib/QtCore.framework/QtCore
QGrabCut: /Applications/Qt/5.3/clang_64/lib/QtGui.framework/QtGui
QGrabCut: /usr/local/lib/libopencv_videostab.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_video.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_ts.a
QGrabCut: /usr/local/lib/libopencv_superres.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_stitching.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_photo.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_ocl.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_objdetect.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_nonfree.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_ml.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_legacy.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_imgproc.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_highgui.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_gpu.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_flann.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_features2d.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_core.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_contrib.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_calib3d.2.4.9.dylib
QGrabCut: /Applications/Qt/5.3/clang_64/lib/QtCore.framework/QtCore
QGrabCut: /usr/local/lib/libopencv_nonfree.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_ocl.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_gpu.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_photo.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_objdetect.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_legacy.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_video.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_ml.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_calib3d.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_features2d.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_highgui.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_imgproc.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_flann.2.4.9.dylib
QGrabCut: /usr/local/lib/libopencv_core.2.4.9.dylib
QGrabCut: CMakeFiles/QGrabCut.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable QGrabCut"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QGrabCut.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QGrabCut.dir/build: QGrabCut
.PHONY : CMakeFiles/QGrabCut.dir/build

CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/main.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/SegmentInterface.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/gmm/GMM.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/grabcut/CommonFunc.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/grabcut/GrabCut.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/maxflow/graph.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/maxflow/maxflow.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/LoG/smooth.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/ui/ImageLabel.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/ui/ImageWidget.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/ui/ParamWidget.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/ui/QGrabCut.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/qrc_QGrabCut.cpp.o.requires
CMakeFiles/QGrabCut.dir/requires: CMakeFiles/QGrabCut.dir/QGrabCut_automoc.cpp.o.requires
.PHONY : CMakeFiles/QGrabCut.dir/requires

CMakeFiles/QGrabCut.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QGrabCut.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QGrabCut.dir/clean

CMakeFiles/QGrabCut.dir/depend: ui_ParamWidget.h
CMakeFiles/QGrabCut.dir/depend: ui_QGrabCut.h
CMakeFiles/QGrabCut.dir/depend: qrc_QGrabCut.cpp
	cd /Users/leon/Documents/QGrabCut/Qtbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leon/Documents/QGrabCut /Users/leon/Documents/QGrabCut /Users/leon/Documents/QGrabCut/Qtbuild /Users/leon/Documents/QGrabCut/Qtbuild /Users/leon/Documents/QGrabCut/Qtbuild/CMakeFiles/QGrabCut.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QGrabCut.dir/depend

