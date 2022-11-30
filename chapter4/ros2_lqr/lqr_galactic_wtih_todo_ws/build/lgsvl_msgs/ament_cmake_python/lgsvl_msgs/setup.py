from setuptools import find_packages
from setuptools import setup

setup(
    name='lgsvl_msgs',
    version='0.0.4',
    packages=find_packages(
        include=('lgsvl_msgs', 'lgsvl_msgs.*')),
)
