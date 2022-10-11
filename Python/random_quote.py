import requests
import random
import json

q_obj = random.choice(json.loads(requests.get("https://zenquotes.io/api/quotes/").text))
print(f"{q_obj['q']} - {q_obj['a']}")