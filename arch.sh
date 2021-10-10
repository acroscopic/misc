#!/bin/bash

# Personal Arch linux setup script
# run this after the base install


if [[ $(/usr/bin/id -u) -ne 0 ]]; then
    echo "Not running as root"
    exit
fi


# updating and installing programs
pacman -Syyu
pacman -S signal firefox ghostwriter yay virtualbox terminator audacity thunderbird timeshift galculator lyrebird deluge python-dropbox gparted htop neofetch libreoffice gimp wireshark obs-studiocmus

yay -S mullvad-vpn-bin pcloud-drive sublime-text4

# setting up the file system
cd ~/Desktop/; mkdir media; mkdir temp; mkdir VMs; cd media; mkdir audio; mkdir bin; mkdir documents; mkdir image; mkdir iso; mkdir video; cd ~

# downloading my dotfiles and replacing them in the home directory
git clone https://github.com/acroscopic/dotfiles; rm -rf .bash_aliases .bash_profile .bashrc .nanorc; cd dotfiles; rm -rf .git; mv .* -t ..


#opening a bunch of firefox extensions
xdg-open https://addons.mozilla.org/en-US/firefox/addon/adblocker-ultimate/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/buster-captcha-solver/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/clearurls/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/cookie-autodelete/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/decentraleyes/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/honey/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/https-everywhere/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/i-dont-care-about-cookies/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/privacy-badger17/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/sponsorblock/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/startpage-private-search/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/ublock-origin/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/universal-bypass/
xdg-open https://addons.mozilla.org/en-US/firefox/addon/user-agent-string-switcher/


