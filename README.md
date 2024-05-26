# Product Credit Calculator

Welcome to the **Product Credit Calculator**! 
This project is a web application designed to search, sort, and calculate credits for products. The application is built using Python, C++, Flask, React.js, and Docker.

## Table of Contents

- [Project Structure](#project-structure)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Technologies Used](#technologies-used)
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

## Features
- **Web Scraping:** Automatically scrape product data from various online stores.
- **Product Search:** Search for products from different online stores.
- **Sorting:** Sort products by price and other attributes.
- **Credit Calculation:** Calculate the credit for a product.

## Installation

Follow these steps to set up the project on your local machine.

### Prerequisites

- [Docker](https://www.docker.com/get-started)
- [Docker Compose](https://docs.docker.com/compose/install/)
- [Git](https://git-scm.com/)

### Steps

1. **Clone the repository:**

    ```sh
    git clone https://github.com/yourusername/product-credit-calculator.git
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

## Contributing

We welcome contributions! Please follow these steps:

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