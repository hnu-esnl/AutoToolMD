# AutoToolMD
The codebase contains source code and executable packages for automotive software automated 
architecture refactoring tool called AutoToolMD.

* In the Architecture refactoring folder of the source code, `main.py` runs the code for the tool interface. 
`getInformation.py` gets the schema element code for processing the arxml file of the car software. 
`test_GN.py` is for architecture refactoring and modularity code.
The architecture refactoring algorithm used is mainly in the `networx\algorithms\centrality\betweenness.py` file of networkx codebase.
We modified and optimized the original community division algorithm in the library.

* Download the `architecture_refactoring_tool` folder locally and click the `architecture_refactoring.exe` file in the folder to run the tool  (note that the operating system should be Windows). 
Upload the autosar compliant automotive software that needs to be refactored (We provide an case of an automotive software project called `test_data`). Parsing test_data takes some time because information such as components and their interactions are extracted from the arxml file. After successful parsing, the information of the current automotive software architecture and the results of applying the W-GN algorithm for architecture reconstruction can be viewed.
    *  In the `main interface` of the tool, architecture engineers see the number of software components(SWCs) included in the parsed autosar automotive software, the number of ports, and the top ten SWCs by number of ports.
    *  In the `information interface` of the tool, architecture engineers view basic information about each SWC in the architecture, including SWC name, number of ports, SWC access degree, and owning module.
    *  In the `view interface` of the tool, architecture engineers view the interaction diagram between the components of the architecture and the specific ports used to send and receive.
    *  Within the `module division interface`, architecture engineers specify their desired number of modules according to their requirements. If the recommended partition number is selected, the interface will display the results obtained by trying the W-GN algorithm for architecture refactoring.
    *  Architecture engineers can customize the number of partitions, and then view the corresponding refactoring results and modularity.
    *  Finally, AutoToolMD will show the `refactoring report`, the modularity, the number of modules and the SWCs contained in each module before and after the refactoring.
    *  For details about how to use the tool, see the `help page`.
