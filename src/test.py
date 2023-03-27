import cv2 as cv
import sys

img = cv.imread(cv.samples.findFile("../assets/starry_night.jpg"))

if img is None:
    sys.exit("Could not read image.")

cv.imshow("Display window", img)
k = cv.waitKey(0)

if k == ord("s"):
    cv.imwrite("../assets/starry_night.png", img)
