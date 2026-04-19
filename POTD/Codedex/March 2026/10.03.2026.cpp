import re
def find_unique_words(transcript):
  # Write code beleow 💖
  words = re.sub(r'[^\w\s]', '', transcript.lower()).split()
  return len(set(words))
