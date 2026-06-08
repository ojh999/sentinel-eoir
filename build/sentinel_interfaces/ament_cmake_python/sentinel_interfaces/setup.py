from setuptools import find_packages
from setuptools import setup

setup(
    name='sentinel_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('sentinel_interfaces', 'sentinel_interfaces.*')),
)
