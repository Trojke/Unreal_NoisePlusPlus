# Unreal_NoisePlusPlus
Noise++ Ported into a C++ only plugin for Unreal Engine 4.9.2!
Maybe some blueprint nodes will coem oneday.

To install:

copy into your project's Plugins folder (make one if it doesn't exsist)
Open "YouProject".Build.cs and where it says PublicDependencyModuleNames
add "NoisePlusPlus" to the end. Don't forget the comma before it. 

Now all you have to do is add "NoisePlusPlus.h" to whatever file is going to use Noise++ and off you go.
That single include gives you the entire Library, there's no need to include every noise module individually.

For notes on how to actually use Noise++, I recommend downloading the source from http://sourceforge.net/projects/noisepp/
and looking at the tutorial C++ files, the first 2 tutorials walk through how to use the library just by itself, with modules.
The test program goes through (a bit cryptically) how to do multithreading.
