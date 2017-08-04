eValu8

eValu8 C++ Application

eValu8 is a C++ based application that evaluates the price of a property based on certain characteristics, such as its view, size in square feet, number of bedrooms, facilities, and access to transportation such as the metro and the tram. It takes in these five inputs, and uses fuzzy logic to classify the inputs into categories, and based on certain pre-determined rules, displays to the user the estimated price of that property. Right now, the application only supports rental apartments in Dubai Marina, but separate fuzzy controllers can be built to incorporate other locations and even apply on a global scale.

Getting Started

1. Install Code::Blocks or any C++ Integrated IDE.
2. Download the GitHub repository as a .zip file. To do this, click Clone or download, and select Download ZIP.
3. Install Fuzzy Lite from this link: http://www.fuzzylite.com/downloads/ (optional).
4. Unzip the .zip file you just downloaded.

Running the Application

1. Open the csci323-project.cbp file using your IDE
2. Click 'Run'
3. From the dialog box that appears, input any of the following values:
  - For view: 'street', 'marina', or 'sea', in lowercase letters, then press enter.
  - For size: Any value between 0 and 3000, then press enter.
  - For number of bedrooms: 'studio', 'one', 'two', or 'three', in lowercase letters, then press enter.
  - For transportation access: 'metro', 'tram', or 'none', in lowercase letters, then press enter.
  - For facilities: 'gym', 'pool', or 'none', in lowercase letters, then press enter.
  - You can try it out with any property you want.

Graphing the Results using Fuzzy Lite

1. Open the FuzzyLite folder, and click on qtfuzzylite.
2. Enter the input values and their respective terms.
3. Enter Price as the output.
4. Specify the minimum and maximum for both inputs and output.
 - The control engine will generate the rules.
 - The inserted inputs are compared with the rules and the output in the graph is highlighted in green.
