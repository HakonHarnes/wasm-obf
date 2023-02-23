import json

data = []

# Read the JSON data from a file
with open('data.json', 'r') as file:
    for line in file:
        data.append(json.loads(line))

# Print the data
print(data)
