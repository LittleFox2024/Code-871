# Code-871
Creating the “System Call” shell as seen in Sword Art Online: Alicization.

# What's the Point of This?
As of now, there is no real reason to use this. In fact, it will likely be inefficient for anything real. However, it would be fun if it could eventually be hooked up to a speech-to-text program. Now, I have no idea how to make one, and hooking an existing one might not format it right. However, that's the ultimate goal.

# Usage
Type "System Call:" then one of the following: generate, destroy, inspect, execute, or enhance armament. A list of options is available with `System Call: Inspect Entire List`.

Enhance Armament will elevate priveleges to Admin. Enhance Armament: Release Recollection will go to TrustedInstaller - this seems more useful to most people.

The colons are required, and there should be only one space between words.
# To Do
1. Main file:
  - None
3. Execute command:
  - Ensure it's secure
3. Generate:
  - Maybe make some way to create some fun graphics to be like "generate luminous element"
4. Destroy:
  - Maybe use it like taskkill (or kill to Linux users) in addition to deleting a file.
5. Enhance Armament:
  - Figure out a better way to do elevation than relying on gsudo for TI priveledges. Sudo will work, but I may create a custom program/command for 23H2 and earlier users.

# Ideas I may Implement
In addition to System Call, I might add some Goddes/God calls. Ex: "Solace:", "Stacia:", "Terraria:", or "Vecta:". These commands will be very powerful, if implemented. Be careful with Vecta's though. 

# Compiling
As of now, I'm trying to make this portable and use standard libraries. This is not a hard rule and may likely change.

I've tried it with g++ on Void Linux and Visual Studio 2022 (or more like the "cl" compiler that comes with it - VS will likely yell at you about strcp being used).

Just use "g++ -o main.exe main.cpp" or "cl main.cpp", then execute main.exe.

To get the icon in Windows, open ResourceHacker and add the icon through there.
