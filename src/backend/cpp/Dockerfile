# Use an official GCC runtime as a parent image
FROM gcc:latest

# Set the working directory in the container
WORKDIR /usr/src/app

# Copy the current directory contents into the container
COPY . .

# Install any needed packages
RUN apt-get update && apt-get install -y \
    cmake \
    git \
    && rm -rf /var/lib/apt/lists/*

# Clone pybind11
RUN git clone https://github.com/pybind/pybind11.git

# Compile the C++ code
RUN mkdir build && cd build && cmake .. && make

# Run the C++ executable (replace this with your actual command)
CMD ["./build/calculator"]