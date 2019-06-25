
Debian
====================
This directory contains files used to package bitcoinreald/bitcoinreal-qt
for Debian-based Linux systems. If you compile bitcoinreald/bitcoinreal-qt yourself, there are some useful files here.

## bitcoinreal: URI support ##


bitcoinreal-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcoinreal-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcoinrealqt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoinreal128.png` to `/usr/share/pixmaps`

bitcoinreal-qt.protocol (KDE)

