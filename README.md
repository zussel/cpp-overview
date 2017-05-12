# cpp overview

A c++ overview covering development and changes since pre c++98 to c++17

Live presentation [here](https://zussel.github.io/cpp-overview/).

Content
- auto keyword
- range based for loops
- initializer list
- smart pointers (shared_ptr, unique_ptr)
- lambda functions
- template meta programming
- thread, tuples, regex and move semantic

Presentation is done with [RevealJS](http://lab.hakim.se/reveal-js/#/). Just
enter the ```presentation``` folder and start a web service within.

For example:
```python2 -m SimpleHTTPService 8000```

The samples are under the ```sources``` dir and organized with [cmake](https://cmake.org/).

Building under Linux
--------------------

Create a build directory change to it and call cmake:

    $ mkdir build
    $ cd build
    $ cmake ..
    
Then you can build matador from sources:

    $ make

Building under Windows (for Visual Studio)
------------------------------------------

Create a build directory change to it and call cmake:

    $ mkdir build
    $ cd build
    $ cmake -G "Visual Studio 14" ..

Then open the ```cpp-overview.sln``` within Visual Studio and build.
