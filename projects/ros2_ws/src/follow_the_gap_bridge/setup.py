from setuptools import setup
import os
from glob import glob

package_name = 'follow_the_gap_bridge'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='djnighti@ucsd.edu',
    description='Follow The Gap bridge node',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'follow_the_gap_bridge = follow_the_gap_bridge.follow_the_gap_bridge:main',
        ],
    },
)

