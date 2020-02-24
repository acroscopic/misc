import random
from random import randrange

def roll(shekels = 0, rolls = 0):

	while(True):
		random = randrange(100)
		if random >= (60):
			rolls = rolls + 1
			shekels = shekels + 770
			print("shekels:")
			print(shekels)
			print("rolls:")
			print(rolls)
		if random <= (59):
			shekels = shekels + 1000
			rolls = rolls + 1
			print("shekels:")
			print(shekels)
			print("rolls:")
			print(rolls)
		if shekels >= 60000000000:
			average = rolls / 1000000
			print("YOUR FINAL ANSWER IS:")
			print(average)
			break
roll()
