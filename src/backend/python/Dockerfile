# Use the official Python image from the Docker Hub
FROM python:3.9-slim

# Set up a working directory for the application
WORKDIR /app

# Install system dependencies
RUN apt-get update && apt-get install -y \
    gcc \
    && rm -rf /var/lib/apt/lists/

# Install Python dependencies
COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt

# Copy the backend source code
COPY . .

COPY ../cpp/build/calculator.*.so .
COPY ../cpp/build/sorting.*.so .

# Expose the port the app runs on
EXPOSE 8000

# Command to run the Flask application
CMD ["flask", "run"]
