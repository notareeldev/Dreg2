
Debian
====================
This directory contains files used to package Dregulated/Dregulate-qt
for Debian-based Linux systems. If you compile Dregulated/Dregulate-qt yourself, there are some useful files here.

## Dregulate: URI support ##


Dregulate-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install Dregulate-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your Dregulateqt binary to `/usr/bin`
and the `../../share/pixmaps/Dregulate128.png` to `/usr/share/pixmaps`

Dregulate-qt.protocol (KDE)

