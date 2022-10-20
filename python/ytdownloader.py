# You need to install pytube for this to work. (pip install pytube)
from pytube import YouTube
from datetime import date
SAVE_PATH = input("Where to save? ")
videoLink = input("Enter video link: ")
try:
    yt = YouTube(videoLink)
except:
    print("An error occured while trying to fetch the video.")
print("Fetched video.")
mp4files = yt.filter('mp4') 
yt.set_filename(str(date.today()) + " Video")
d_video = yt.get(mp4files[-1].extension,mp4files[-1].resolution)
print("Downloading video...")
try: 
    # downloading the video
    d_video.download(SAVE_PATH)
except: 
    print("Some Error!") 
print("Task completed.")