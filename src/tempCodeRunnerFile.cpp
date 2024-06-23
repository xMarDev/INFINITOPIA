        std::cerr << "Failed to open file '../assets/index.html'\n";
        std::string response = "HTTP/1.1 500 Internal Server Error\r\nContent-Type: text/plain\r\nContent-Length: 18\r\n\r\nFailed to open file";
        send(clientSocket, response.c_str(), response.length(), 0);
        return;