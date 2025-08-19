Here the Main Demo of Dark Souls - Demakest: Prpare to Read Edition.
linux x64 x86 ver

Take in mind the saves of the game will be generated in the /usr/games/ folder
in your root repo before your home repo. so "chown -R youruser:group /usr/games/"
will be needed in order to allow the game to generate files in that folder.

i made it do this as a balancing measure between your struggle in managing
folder permissions, my struggle about programming a save function as a total noob,
and your security, in fact, allowing external software managing /usr/games/ folder
would not ever allow any of it to manage other files in usr folder or any root related one.
this is all i can do to prevent you to be needing of alter the source code to make it save
in a specific folder in your /home/user folder, since i could not predict what your
user will be named in order to implement it to my script, and i could not retrieve a
code from the world wide web capable of just saving multiple folders with multiple files
in the current folder of the program, ifstream and ofstream could only read and write
files directly in the current folder, no subfolders allowed there.
if my noobness is taking the best of me i would love for you to take me up to date on that.

regardless, enjoy. :==)
