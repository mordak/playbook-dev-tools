workflow "PR Verify" {
  on = "pull_request"
  resolves = ["Verify"]
}

action "Verify" {
  uses = "./action-build"
  runs = ["sh", "-c", "./build.sh -b /root/bbndk -t build"]
}
