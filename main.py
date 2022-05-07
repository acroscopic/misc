# Date: 12/5/21
# Simple Google translation script
# Google translate will stop answering requests if you spam it

from googletrans import Translator, constants

# init the Google API translator
translator = Translator()

print("What language would you like to have translated?")
print("Please enter ISO-639-2 Language code")
print("Example: en, de, ru, ja, iw, la, el, zh-cn")
code = input()

print("Please enter what you would like to be translated:")
response = input()

language = translator.translate(response, dest=code)
print(f"{language.origin} ({language.src}) --> {language.text} ({language.dest})")
