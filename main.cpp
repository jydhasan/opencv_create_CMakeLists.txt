#include <opencv2/opencv.hpp>

int main() {
    cv::VideoCapture cap(0); // Open the default camera

    if (!cap.isOpened()) {
        std::cout << "Failed to open the camera" << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (true) {
        cap.read(frame); // Read the frame from the camera

        if (frame.empty()) {
            std::cout << "Failed to capture frame" << std::endl;
            break;
        }

        cv::imshow("Camera", frame); // Display the frame

        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    cap.release(); // Release the camera
    cv::destroyAllWindows(); // Close all windows

    return 0;
}
