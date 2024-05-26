# Product Credit Calculator

> **_NOTE:_**  This project is still in progress, therefore its repository is not completed. The descriptions below outline the intended goals and features of the repository.

## Project Description
This project is a web application designed to search, sort, and calculate credits for products. The application is built using Python, C++, Flask, React.js, and Docker.

## Project Overview
The Product Credit Calculator has a backend for calculations and a user-friendly frontend. The backend uses C++ and Python for data processing and API management. The frontend, built with React.js, provides a smooth interface. Docker is used to make the application easy to deploy and scale.

## Table of Contents

- [Project Structure](#project-structure)
- [Key Features](#key-features)
- [Installation](#installation)
- [Usage](#usage)
- [Technologies Used](#technologies-used)
- [Additional Information](#additional-information)
- [Contributing](#contributing)
- [License](#license)

## Project Structure
```
product-credit-calculator/
├── docker-compose.yml
├── README.md
├── src/
│   ├── backend/
│   │   ├── cpp/
│   │   │   ├── calculator.cpp
│   │   │   ├── include/
│   │   │   │   ├── calculator.h
│   │   │   │   ├── data_struct.h
│   │   │   ├── sorting.cpp
│   │   │   ├── Dockerfile
│   │   ├── python/
│   │   │   ├── app.py
│   │   │   ├── calculator.py
│   │   │   ├── sorting.py
│   │   │   ├── scraper.py
│   │   │   ├── models.py
│   │   │   ├── requirements.txt
│   │   │   ├── Dockerfile
│   ├── frontend/
│   │   ├── public/
│   │   │   ├── index.html
│   │   ├── src/
│   │   │   ├── components/
│   │   │   ├── App.js
│   │   │   ├── index.js
│   │   ├── package.json
│   │   ├── Dockerfile
```


## Key Features

- **Product Search and Sorting**: Easily find and organize products.
- **Credit Calculation**: Calculate credits for products accurately.
- **Web Scraping**: Automatically gather product data from external sources.
- **RESTful API**: Manage and serve data using a Flask-based API.
- **Responsive UI**: A smooth user experience with React.js.
- **Containerization**: Easy deployment and scaling with Docker and Docker Compose.

## Installation

Follow these steps to set up the project on your local machine.

### Prerequisites

- [Docker](https://www.docker.com/get-started)
- [Docker Compose](https://docs.docker.com/compose/install/)
- [Git](https://git-scm.com/)

### Steps

1. **Clone the repository:**

    ```sh
    git clone https://github.com/bytebard02/product-credit-calculator.git
    cd product-credit-calculator
    ```

2. **Build and run the Docker containers:**

    ```sh
    docker-compose up --build
    ```

3. **Access the application:**
    - Frontend: `http://localhost:3000`
    - Backend (Flask API): `http://localhost:5000`

## Usage

1. **Start the application:**

    ```sh
    docker-compose up
    ```

2. **Access the frontend:**

    Open your browser and go to `http://localhost:3000`.

3. **Make API requests:**

    You can interact with the Flask backend API at `http://localhost:5000`.

## Technologies Used

- **Frontend:**
  - React.js
  - HTML/CSS
- **Backend:**
  - Python
  - Flask
  - C++
  - pybind11
- **Database:**
  - SQLite
- **Containerization:**
  - Docker
  - Docker Compose

## Additional Information

### Functions Assumed by the Application
- **Administrator**: Manages product database, oversees scraping and calculation algorithms.
- **User**: Searches for products, views sorted results, and calculates credits.

### Data Flows
- **Input**: Product data from web scraping, user search queries.
- **Processing**: Data sorting, credit calculation.
- **Output**: Sorted product lists, calculated credits.

### Possible Future Functionalities
- [ ] Real-time product data updates.
- [ ] Advanced filtering options for product search.
- [ ] User authentication and profile management.

### Interaction Scenarios
- **Search**: User enters search criteria, and results are displayed.
- **Sort**: User applies sorting filters to organize results.
- **Calculate**: User inputs data to calculate credits, and results are shown.

### Academic Knowledge
- **Data Structures and Algorithms (DSA)**: Efficient sorting and searching algorithms.
- **Programming Approaches**: Object-oriented programming in C++ and Python.
- **Course Concepts**: Web scraping techniques, API development, and containerization.

## Contributing

All contributions are welcome! Please follow these steps:

1. **Fork the repository.**
2. **Create a new branch:**

    ```sh
    git checkout -b feature-branch
    ```

3. **Make your changes and commit them:**

    ```sh
    git commit -m "Description of your changes"
    ```

4. **Push to the branch:**

    ```sh
    git push origin feature-branch
    ```

5. **Create a pull request.**

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
