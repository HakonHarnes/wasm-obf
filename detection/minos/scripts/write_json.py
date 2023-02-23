import json

# Define some sample JSON data
data = {
    "name": "John",
    "age": 30,
    "city": "New York"
}

# Write the JSON data to a file
with open('data.json', 'w') as file:
    json.dump(data, file)
