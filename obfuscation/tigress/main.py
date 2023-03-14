import os

dir_path = os.path.dirname(os.path.realpath(__file__))

binary_path = f'{dir_path}/binaries/tigress'
dataset_path = f'{dir_path}/dataset'


transformations = ['Flatten', 'Virtualize']


def run_tigress(path, transformation):
    program_name = path.split('/')[-1]
    output_name = f'{program_name}-{transformation.lower()}-tigress'

    file_in = os.path.join(path, f'{program_name}.c')
    tigress_out = os.path.join(path, 'tigress', f'{output_name}.c')
    emscripten_out = os.path.join(binary_path, f'{output_name}.wasm')

    return os.system(
        f'/bin/sh {path}/obfuscate.sh {file_in} {tigress_out} {emscripten_out} {transformation}')


if __name__ == '__main__':

    for transformation in transformations:
        status = run_tigress(f'{dataset_path}/wasm-asteroids', transformation)
        print('Success' if status == 0 else 'Failed')
