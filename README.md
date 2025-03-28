# Code-871
Creating the “System Call” shell as seen in Sword Art Online: Alicization.

# Usage
Type "System Call:" then one of the following: generate, destroy, inspect, execute, or enhance armament. A list of options will be made available when they are implemented. It might take you a lifetime to figure out how to find it, though :)

Enhance Armament will elevate priveleges to Admin. Enhance Armament: Release Recollection will go to either System or TrustedInstaller - whichever people find more useful is the one I'll use.

The colons are required, and there should be only one space between words.
# To Do
1. Main file:
  - None
3. Execute command:
  - Make sure this works right. I've got the code but haven't uploaded it yet.
  - Ensure its secure
3. Generate:
  - Figure out how to create a file like Linux "touch"
  - Maybe make some way to create some fun graphics to be like "generate luminous element"
4. Destroy:
  - Figure out how to delete a file. Maybe also use it like taskkill (or kill to Linux users).
5. Enhance Armament:
  - Figure out how to do elevation in Windows. I might use gsudo as a backend until I can get a better idea.

# Ideas I may Implement
In addition to System Call, I might add some Goddes/God calls. Ex: "Solace:", "Stacia:", "Terraria:", or "Vecta:". These commands will be very powerful, if implemented. Be careful with Vecta's though. 

# Compiling
When more is completed, a binary will be released. In themean time, I'm trying to make this portable and use standard libraries. This is not a hard rule and may likely change.

I've tried it with g++ on Cygwin and Visual Studio 2022 (or more like the "cl" compiler that comes with it - VS will likely yell at you about strcp being used).

Just use "g++ -o main.exe main.cpp" or "cl main.cpp", then execute main.exe.

Note that if you build it with Cygwin, all accounts using it must either call it through Cygwin or have the Cygwin files in their %PATH% variable. This is the only reason I even gave VS a try... and it was not a great experience.
