project('example', 'cpp',
  version: '1.0.0',
)

# python installation
pymodule = import('python')
python = pymodule.find_installation('python3', required: true)

# pybind11 dependency
pybind11_dep = dependency('pybind11',
  fallback: ['pybind11', 'pybind11_dep'],
  required: true)

# source files for our extension module and bindings:
source = files([
  'src/add.cpp'
])

# create python extension
python_extension = python.extension_module('example', source,
  dependencies: [pybind11_dep, python.dependency()],
  install: true,
)
