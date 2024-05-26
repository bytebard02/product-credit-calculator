# Use the official Node.js image from the Docker Hub
FROM node:lts-alpine3.20

# Set up a working directory for the application
WORKDIR /app

# Copy the package.json and install dependencies
COPY package.json ./
RUN npm install

# Copy the entire frontend source code
COPY . .

# Expose the port the app runs on
EXPOSE 3000

# Command to run the React application
CMD ["npm", "start"]