const Express = require("express");
const express = Express();

const https = require("https");
const fs = require("fs");



// Load SSL certificate and private key
const options = {
    key: fs.readFileSync('local-key.pem'), // Your private key
    cert: fs.readFileSync('local.pem') // Your certificate
};

express.use(Express.json());


express.get("/", (req, res) => {
    const requestData = req.body; 
    console.log("Received request data:\n", requestData);
    res.send("Welcome, to hell.");
});

express.post("/api/v1/login/steam/", async (req, res) => {
    const Posted = req.body;
    const time = Posted.timestamp;
    const user = Posted.displayName
    res.json({
        timestamp:"2024-09-15T04:12:59.335Z",
        playerId: "ae8th3r38eSt21r1",
        displayName: user,
        displayNameStatus: "Initial",
        jwt: "IKNOWWHEREYOULIVE",
        refreshToken: "f4b68d2d3b0c4d1a6b58a7f2e9d3c1e0a5b9d8a2e6a7f1b4c9e0d6b5a2d8f0e3",
        isAdmin: true
    });
    console.log("Logged in as user '" + user + "'\n");
});

express.post("/api/v1/player/register/", async (req, res) => {
    const Posted = req.body; // Accessing the data sent by the client
    const user = Posted.displayName;
    const time = Posted.timestamp;
    console.log("Registered player " + user + ".\n");
    res.json({
        timestamp:"2024-09-15T04:12:59.335Z",
        playerId:"ae8th3r38eSt21r1",
        displayName: user,
        displayNameStatus:"Ok"
    });
});

const server = https.createServer(options, express);
const PORT = 443;

server.listen(PORT, () => {
    console.log(`Server is running on https://localhost:${PORT}`);
});
