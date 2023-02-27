from sklearn.feature_extraction.text import CountVectorizer
from sklearn.metrics.pairwise import cosine_similarity


def calculate_cosine_similarity(f1, f2, n):

    # Read in the contents of both files as binary strings
    with open(f1, 'rb') as file:
        c1 = file.read()
    with open(f2, 'rb') as file:
        c2 = file.read()

    # Convert the binary strings to a list of hex values
    hex_list1 = [hex(byte) for byte in c1]
    hex_list2 = [hex(byte) for byte in c2]

    # Convert the hex lists to strings and create a CountVectorizer object with n-grams
    hex_str1 = ' '.join(hex_list1)
    hex_str2 = ' '.join(hex_list2)

    vectorizer = CountVectorizer(ngram_range=(
        n, n), token_pattern=r'(?u)\b\w+\b')

    # Fit the CountVectorizer object to the hex strings
    vectorizer.fit_transform([hex_str1, hex_str2])

    # Convert the hex strings to binary vectors using the CountVectorizer
    binary_vectors = vectorizer.transform([hex_str1, hex_str2]).toarray()

    # Calculate the cosine similarity between the binary vectors
    similarity = cosine_similarity(binary_vectors[0].reshape(
        1, -1), binary_vectors[1].reshape(1, -1))[0][0]

    return similarity
