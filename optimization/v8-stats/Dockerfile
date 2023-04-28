# Use zenika/alpine-chrome:with-puppeteer-xvfb base image
FROM zenika/alpine-chrome:with-puppeteer-xvfb

# Switch to the root user
USER root

# Install Python, pip, and Node.js with npm
RUN apk add --no-cache python3 py3-pip nodejs npm

# Create a working directory
WORKDIR /app

# Copy requirements.txt into the container
COPY requirements.txt .

# Install required Python packages
RUN pip install --no-cache-dir -r requirements.txt

# Install http-server globally
RUN npm install -g http-server

# Copy main.py and the binaries directory into the container
COPY main.py .

# Set the command to run the Python script and start the http-server
CMD ["sh", "-c", "http-server -p 8080 >/dev/null 2>&1 & python3 main.py"]
