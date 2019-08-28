from conans import ConanFile, CMake


class MojapaczkaConan(ConanFile):
    name = "cmake_training"
    version = "1.0"
    license = "<Put the package license here>"
    author = "<Put your name here> <And your email here>"
    url = "<Package recipe repository url here, for issues about the package>"
    description = "<Description of Mojapaczka here>"
    topics = ("<Put some tag here>", "<here>", "<and here>")
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    default_options = "shared=False"
    generators = "cmake"
    exports_sources = "src/*"

    def cmake_configure(self):
        cmake = CMake(self)
        cmake.configure(source_folder="src")
        return cmake

    def build(self):
        cmake = self.cmake_configure()
        cmake.build()

    def package(self):
        cmake = self.cmake_configure()
        cmake.install()

