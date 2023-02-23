# API LIMITATIONS:
# - 4 lookups per min
# - 500 lookups per day
# - 15k lookups per month

import os
import requests

from dotenv import load_dotenv

load_dotenv()

url = "https://www.virustotal.com/api/v3/files"
filename = "../dataset/input/miner.wasm"

files = {"file": (filename, open(
    filename, "rb"), "application/wasm")}
headers = {
    "accept": "application/json",
    "x-apikey": os.getenv('API_KEY')
}

response = requests.post(url, files=files, headers=headers)

print(response.text)
