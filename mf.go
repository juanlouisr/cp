type ApiResponse struct {
	// Define the structure that matches your JSON response
	// Example fields:
	Q    string `json:"q"`
	Hash string `json:"hash"`
}

func performGetRequest(query string) {
	// Define the API URL with the query parameter
	apiUrl := fmt.Sprintf("http://challenge-server.code-check.io/api/hash?q=%s", query)

	// Perform the HTTP GET request
	response, err := http.Get(apiUrl)
	if err != nil {
		return nil, err
	}
	defer response.Body.Close()

	// Check the response status code
	if response.StatusCode != http.StatusOK {
		return
	}

	// Read and parse the JSON response
	body, err := ioutil.ReadAll(response.Body)
	if err != nil {
		return
	}

	var apiResponse ApiResponse
	if err := json.Unmarshal(body, &apiResponse); err != nil {
		return
	}
	fmt.Println(apiResponse.hash)
	return
}
