#!/bin/bash
#script to covert audio files

echo 'what filetype are you converting from'
echo 'example: mp3, mp4, ogg, wav, webm...'
echo '-------------------------------------'
read OLD
echo 'what would like for the new file extension?'
echo '-------------------------------------------'
read NEW
echo 'what directory are the audio files in?'
echo 'example: /home/user/Desktop/Music'
echo '--------------------------------------'
read DIR
clear

for i in $DIR/*.$OLD;
	do NAME=`echo "$i" | cut -d'.' -f1`
	echo "$NAME"
	ffmpeg -i $i "${NAME}.$NEW"
done

#CAUTION: will destory all files in the directory you listed
#rm -f $DIR/*.mp3
