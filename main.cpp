#include <iostream>

int main() {
    // Image
    constexpr int image_width = { 256 };
    constexpr int image_height = { 256 };

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_width; j++) {
        std::clog << "\rScanlines remaining: " << (image_height - 1) << ' ' << std::flush;
        for (int i = 0; i < image_height; i++) {
            const double r { static_cast<double>(i) / static_cast<double>(image_width - 1) };
            const double g { static_cast<double>(j) / static_cast<double>(image_height - 1) };
            const double b { 0.0 };

            const int ir { static_cast<int>(255.999 * r) };
            const int ig { static_cast<int>(255.999 * g) };
            const int ib { static_cast<int>(255.999 * b) };

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::clog << "\rDone.                    \n";
}