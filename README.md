# JSON Merge

This tool allows to merge json files

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- cmake


### Installing

- Clone the repository
- Run cmake command in src directory

```
cmake .
```
- Run make
```
make
```

## Running the tests

- View all options
```
./merge --help
```
- Get merged output on console
```
./merge --o 'filename1' 'filename 2'
```

- Get merged output in a file
```
./merge --f 'filename1' 'filename 2' 'outputFile'
```

