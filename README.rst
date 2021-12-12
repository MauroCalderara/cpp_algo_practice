----------
Template Project for Algorithm and Data Structure Exercises
----------

Very simple directory/build structure for doing algorithm and data structure
exercises in C++.

This uses `Catch2 <https://github.com/catchorg/Catch2>` to test and benchmark,
and `CMake <https://cmake.org/>` as a build system.


Getting started
---------------

Run these commands to set things up::

  # Make sure you have a compiler, GNU make and cmake > 3.12 installed.
  # On a Debian system `sudo apt install build-essential clang cmake`
  # should do the trick.

  # You will also need internet access as the build system assumes it can git
  # clone `catch2` into a subfolder of your build directory.

  # Clone this repo to a location of your choice:
  git clone https://github.com/MauroCalderara/cpp_algo_practice.git ${LOCAL_FOLDER}

  cd ${LOCAL_FOLDER}
  mkdir build
  cd build
  cmake ..

  # This should build catch2 and the template under src/template.cpp
  make


Testing the (initial) build
-----------------------

To test the build, run::

  # This should run a trivial test case and benchmark
  ./template


Creating a new file for an exercise
---------------------------------

Use the template as a skeleton for your own code::

  # Copy the template provided
  cp ../src/template.cpp ../src/my_exercise.cpp

  # CMake should pick up the new source file
  cmake ..


Building & testing your solution
-----------------------------

First, add your implementation and test cases to `../src/my_exercise.cpp`.

To build and test your code::

  # Build
  make

  # Run the binary
  ./my_exercise


If you need to clean your build
-----------------------------

Simply remove the `build` folder you created above::

  cd ..
  rm -rf build/

and start over::

  mkdir build
  cmake ..
