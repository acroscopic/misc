clear
echo "YOUTUBE-DL SONG DOWNLOADER"
echo "please input a youtube url"
echo "---------------------------"
read URL
clear
echo "What filetype would like?"
echo "example: mp3, webm, etc..."
echo "-------------------------"
read FILE

#make youtube-dl output the filename here
youtube-dl -e -s --no-warnings $URL

#download the song
youtube-dl -x -f "bestaudio" --audio-format $FILE --no-part -w -o "~/Dropbox/music/%(title)s.%(ext)s" $URL

#echo the files into cmus playlists
cd ~/Dropbox/music
find $PWD > ~/.config/cmus/playlists/jams~
sed -i '1d' /home/$USER/.config/cmus/playlists/jams~
cd ~
