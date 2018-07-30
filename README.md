# Godot GDNative Nativescript 1.1 introduction

This is a Godot demo project in support of my [nativescript 1.1 YouTube tutorial video](https://youtu.be/coming_soon)

You will need a recent Godot master build to run this.

### Cloning and compiling

It is best to clone this repository with the recursive option to ensure submodules are downloaded:
```
git clone --recursive https://github.com/BastiaanOlij/gdtest.git
```

Next compile the godot-cpp bindings:
```
cd gdtest
cd godot-cpp
scons platform=<your platform> generate_bindings=yes
cd ..
```

And compile our module:
```
scons platform=<your platform>
```

### License

Source code is released under MIT (see LICENSE).

### Useful links

 - [Main website](https://godotengine.org)
 - [Source code](https://github.com/godotengine/godot)
 - [Documentation](http://docs.godotengine.org)
 - [Community hub](https://godotengine.org/community)
 - [GodotNativeTools](https://github.com/GodotNativeTools)
 - [My Youtube channel](https://www.youtube.com/channel/UCrbLJYzJjDf2p-vJC011lYw)

About this repository
---------------------
This repository was created by and is maintained by Bastiaan Olij a.k.a. Mux213

You can follow me on twitter for regular updates here:
https://twitter.com/mux213

Videos about my work with Godot can by found on my YouTube page:
https://www.youtube.com/channel/UCrbLJYzJjDf2p-vJC011lYw
