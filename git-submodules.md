<!-- AI generated -->
### Step 1: Fork the Upstream Repository

1. Go to the original repository on GitHub (`remzi-arpacidusseau/ostep-homework`).
2. Click **Fork** to create your copy at `[https://github.com/](https://github.com/)<your-username>/ostep-homework.git`.

---

### Step 2: Add Submodule to Your Main Repo

Run the following inside your local `ostep` main repository:

```bash
# Add your fork as a submodule inside the 'ostep-hw' directory
git submodule add https://github.com/<your-username>/ostep-homework.git ostep-hw

# Commit and push the new submodule configuration to your main repo
git commit -m "Add ostep-homework as submodule"
git push

```

---

### Step 3: Link Upstream Remote for Author Updates

Navigate inside the submodule directory and add the author's repository as `upstream`:

```bash
cd ostep-hw
git remote add upstream https://github.com/remzi-arpacidusseau/ostep-homework.git

```

---

### Step 4: Daily Workflow

**Making Custom Edits & Pushing to Your Fork**

```bash
cd ostep-hw
git add .
git commit -m "Add solutions and personal edits"
git push origin main

```

**Pulling New Changes from the Authors**

```bash
cd ostep-hw
git fetch upstream
git merge upstream/master   # Resolve any merge conflicts if prompted
git push origin main        # Update your GitHub fork with merged changes

```

**Updating the Submodule Pointer in Your Main Repo**
Whenever the submodule commit pointer changes, update your main repository:

```bash
cd ..                       # Return to main 'ostep' directory
git add ostep-hw
git commit -m "Update ostep-hw submodule pointer"
git push

```